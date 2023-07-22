      int *p=&a, *q=&b, *r=&c, *temp;
      *temp=*p;
      *p=*q;
      *q=*r;
      *r=*temp;