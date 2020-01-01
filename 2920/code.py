c,d,e,f,g,a,b,C = map(int,input().split())

if(c<d<e<f<g<a<b<C):
    print("ascending")
elif(c>d>e>f>g>a>b>C):
    print("descending")
else:
    print("mixed")