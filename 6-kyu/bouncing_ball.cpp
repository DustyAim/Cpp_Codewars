using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window){
        if ((bounce>=1) || (bounce<=0) || (window>=h) || (h<=0) || (window<=0)) return -1;

        int counter = 1;
        while ((h *= bounce) > window)
            counter += 2;

        return counter;
    }
};