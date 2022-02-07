#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

struct Point
{
    float X;
    float Y;
    Point(float x, float y) : X(x), Y(y){};
};
struct Line
{
    Point P;
    float Slope;
    bool Vert = 0;
    Line(Point p, float s) : P(p), Slope(s){};
    Line(Point p, float s, bool vert) : P(p), Slope(s), Vert(vert){};
};

Line perpendicularBisector(Point a, Point b);
Line LineY(float y);
Line LineX(float x);

Point crossedPoint(Line a, Line b);
Point initPoint();
Point oneCircle(vector<Point> &vp, int y);

float distance(Point a, Point b) // ok
{
    float dx = b.X - a.X;
    float dy = b.Y - a.Y;
    return sqrt(dx * dx + dy * dy);
}

void printVP(vector<Point> &vp)
{
    cout << "---before iteration---" << endl;
    for (auto &i : vp)
        cerr << "(" << i.X << ", " << i.Y << ")" << endl;
    cout << "---after iteration---" << endl;
}


int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    vector<Point> vp;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        vp.emplace_back(x, y);
    }

    int y;
    cin >> y;
    Point center = oneCircle(vp, y);
    cout << "center: " << center.X << " " << center.Y << endl;
}

Line perpendicularBisector(Point a, Point b)
{
    if (a.Y == b.Y)
        return LineX((a + b) / 2);

    Point p((a.X + b.X) / 2, (a.Y + b.Y) / 2);
    float slope = (b.Y - a.Y) / (b.X - a.X);
    return Line(p, slope);
}
Line LineY(float y) { return Line(Point(0, y), 0); }
Line LineX(float x) { return Line(Point(x, 0), 0, true); }

Point crossedPoint(Line a, Line b)
{
    if (a.Vert && b.Vert) // error
    {
        return initPoint();
    }
    else if (a.Vert)
    {
        float x = a.P.X;
        float y = b.Slope * (x - b.P.X) + B.P.Y;
        return Point(x, y);
    }
    else if (b.Vert)
    {
        float x = b.P.X;
        float y = a.Slope * (x - a.P.X) + a.P.Y;
        return Point(x, y);
    }
    else
    {
        float x = (b.P.Y - b.P.X * b.Slope - a.P.Y + a.P.X * a.Slope) / (a.Slope - b.Slope);
        float y = a.Slope * (x - a.P.X) + a.P.Y;
        return Point(x, y);
    }
}
Point initPoint() { return Point(0, 0); }

Point oneCircle(vector<Point> &vp, int y)
{
    printVP(vp);
    cerr << "vp.size() = " << vp.size() << endl;

    if (vp.size() <= 0)
        return initPoint();
    else if (vp.size() <= 2)
    {
        if (vp.size() == 1)
            return Point(vp[0].X, y);
        else
        { // vp.size() == 2
            Line perBise = perpendicularBisector(vp[0], vp[1]);
            return crossedPoint(perBise, LineY(y));
        }
    }
    else
    {
        vector<pair<Point, Point>> pointPair;
        vector<float> X; // crossPoint's x with Y=y & its perBise Line
        // X.size() == pointPair.size() == (vp.size()+1)/2
        for (ull i = 0; i < vp.size(); i += 2)
        {
            Point a = vp[i];
            Point b = initPoint();
            if (i == vp.size() - 2)
                b = vp[0];

            pointPair.emplace_back(a, b);
            Line perBise = perpendicularBisector(a, b);
            float x = crossedPoint(perBise, LineY(y)).X;
            X.emplace_back(x);
        }
        Point qm(X[X.size() / 2], y);
        Point pj = initPoint(); // xm = X[X.size()/2]
        float dist_max = 0;
        for (ull i = 0; i < vp.size(); i++)
        {
            float dist_tmp = distance(qm, vp[i]);
            if (dist_tmp > dist_max)
            {
                dist_max = dist_tmp;
                pj = vp[i];
            }
        }
        // qj = Point(pj.X, y)
        // in order to make XOR selection, using "!"
        bool left =
            !(pj.X < qm.X); // q* is left from qm == qj is left from qm == pj is left from qm
        for (ull i = 0; i < X.size(); i++)
        {
            // X[i] > xm && left || X[i] <= xm && right
            if ((X[i] > (X[X.size() / 2])) ^ left)
            {
                float distA = distance(pointPair[i].first, qm);
                float distB = distance(pointPair[i].second, qm);
                if (distA < distB)
                {
                    vp.erase(vp.begin() + (i * 2));
                    cerr << "erase: " << i * 2 << endl;
                    ;
                }
                else
                {
                    if ((2 * i + 1) == (vp.size() - 1))
                    {
                        vp.erase(vp.begin());
                        cerr << "erase: " << 0 << endl;
                    }
                    else
                    {
                        vp.erase(vp.begin() + (2 * i + 1));
                        cerr << "erase: " << 2 * i - 1 << endl;
                    }
                }
            }
        }
        cerr << "vp.size() = " << vp.size() << endl;
        system("pause");
        return oneCircle(vp, y);
    }
}