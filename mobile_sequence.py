d={'a':1,'b':2, 'c':3,'d':4,'e':5,'f':6,'g':7,'h':8,'i':9,'j':10,'k':11,'l':12,'m':13,'n':14,'o':15,'p':16,'q':17,'r':18,'s':19,'t':20,'u':21,'v':22,'w':23,'x':24,'y':25,'z':26, ' ':27}

seq=['0','2','22','222',
        '3','33','333',
        '4','44','444',
        '5','55','555',
        '6','66','666',
        '7','77','777','7777'
        '8','88','888',
        '9','99','999','9999']


def convert_to_mobile_sequence(s):
    sequnce=''
    for x in s:
        sequnce+=seq[d[x]]

    return sequnce

print(convert_to_mobile_sequence('geeksforgeeks'))