class MyModel(tf.keras.Model):
    def __init__(self):
        super().__init__()     # Python 2 下使用 super(MyModel, self).__init__()
        # 此處添加初始化程式碼（包含 call 方法中會用到的層），例如
        # layer1 = tf.keras.layers.BuiltInLayer(...)
        # layer2 = MyCustomLayer(...)

    def call(self, input):
        # 此處添加模型呼叫的程式碼（處理輸入並返回輸出），例如
        # x = layer1(input)
        # output = layer2(x)
        return output

    # 還可以添加自定義的方法
