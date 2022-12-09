#include <QVector>



double interpol(QVector <double> x,QVector <double> y,int n,double xi)
{
    double result=0;
    for (int i=0;i<n;i++)
    {
        double term=y[i];
        for (int j=0;j<n;j++)
        {
            if (j!=i) term*=(xi-x[j])/(x[i]-x[j]);
        }
        result+=term;
    }
    return result;
}

void getInterpol()
{

    double x1=x_v.first(),x2=x_v.last(),dx=0.001;
    for (double x=x1;x<=x2;x+=dx)
    {
        y_v2<<interpol(x_v,y_v,x_v.size(),x);

        x_v2<<x;

        // Сall of the function of adding a point to the Graph should be here
    }
//    qDebug()<<x_v<<y_v<<endl<<endl;
//    qDebug()<<x_v2<<y_v2;

}
