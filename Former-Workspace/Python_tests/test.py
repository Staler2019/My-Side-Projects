def weighted_grade(score_list, weight_tuple=(0.3, 0.3, 0.4)):
    '''Expects 3 elements in score_list. Multiples each grade by its weight. Return the sum.'''
    grade_float = \
        (score_list[0]*weight_tuple[0]) +\
        (score_list[1]*weight_tuple[1]) +\
        (score_list[2] * weight_tuple[2])
    return grade_float


def prase_line(line_str):
    '''Expects a line of of form last, first, exam1, exam2, final. Return a tuple containing first+last and list of scores.'''
    field_list = line_str.split(',')
    name_str = field_list[1] + ' ' + field_list[0]
    score_list = []
    # gather the scores, now strings, as s list of ints
    for element in field_list[2:]:
        score_list.append(int(element))
    return name_str, score_list


def main():
    '''Get a line_str from the file, print the first grade nicely.'''
    file_name = input('Enter file name: ')
    grade_file = open(file_name, 'r')
    print('{:>13s} {:>15s}'.format('Name', 'Grade'))
    print('-'*30)
    for line_str in grade_file:
        name_str, score_list = prase_line(line_str)
        grade_float = weighted_grade(score_list)
        print('{:>15s} {:14.2f}'.format(name_str, grade_float))


main()
