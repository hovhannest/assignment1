#! /usr/bin/env python2

def lowercase (text):
    return text.lower()

def test():
    def case(text, ans):
        assert lowercase(text) == ans, 'The output is incorrect!'
        print('Ok')
    case('Arshak is doing OS assignment.', \
        'arshak is doing os assignment.')
    case('tHis tEXT sHOUld APpEar in ASCII lowercase letters.', \
        'this text should appear in ascii lowercase letters.')
    # add more cases (optionally)

def run():
    text = raw_input()
    file_ = open('lowercase', 'w')
    file_.write(lowercase(text))
    file_.close()

if __name__ == '__main__':
    # if you want to use the existing tests from function test() then
    # comment `run()` and uncomment `test()`.
     run()
    # test()
