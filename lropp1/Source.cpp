#define SIZE 10

#include <iostream>
#include <cmath>

    using namespace std;
    int j = 0;
    int g = 0;
    class Vector {
    private:
        int coord[SIZE];
        int size;

    public:
        Vector()
        {
            size = 10;
            for (int i = 0; i < SIZE; i++)
            {
                coord[i] = 1;
            }
        }

        Vector(int arr[], int n)
        {
            Set_coord(arr, n);
        }


        ~Vector(){ ; }

        void Set_coord(int arr[], int n)
        {
            Set_count(n);
            Set_all_coord(arr);
        }

        void Set_count(int n)
        {
            size = n;
        }

        void Set_all_coord(int arr[])
        {
            for (int i = 0; i < size; i++)
            {
                coord[i] = arr[i];
            }
        }
        int Get_Data1() {
            cout << endl << "Введіть кількість координат: ";
            cin >> size;
            cout << endl << endl;
            return size;
        }
        void Get_Data2(int arr[]) {
            j++;
            cout << endl << "Введіть координати вектора № "<< j <<": ";
            for (int k = 0; k < size; k++) {
                cin >> arr[k];
            }
        
        }
        void Print()
        {
            g++;
            cout << endl << "Вектор № : "<< g << endl;
            cout << "Координати вектора" << " : ";
            cout << "(";
            for (int i = 0; i < size; i++)
            {
                cout << " " << coord[i] << " ";
            }
            cout << ")";
        }

        void length()
        {
            cout << endl << "Довжина вектора ";
            double len, sq = 0;
            for (int i = 0; i < size; i++)
            {
                sq = sq + (coord[i] * coord[i]);
            }
            len = sqrt(sq);
            cout << "= " << "[" << len << "]" << endl;
        }

        void Sum(Vector v1, Vector v2)
        {
            cout << endl << "{";
            for (int i = 0, res = 0; i < size; i++)
            {
                res = v1.coord[i] + v2.coord[i];
                cout << " " << res << " ";
            }
            cout << "}";
        }

        void difference(Vector v1, Vector v2)
        {
            cout << endl << "{";
            for (int i = 0, res = 0; i < size; i++)
            {
                res = v1.coord[i] - v2.coord[i];
                cout << " " << res << " ";
            }
            cout << "}";
        }

        void scaldob(Vector v1, Vector v2)
        {
            int sum = 0;
            for (int i = 0, res = 0; i < size; i++)
            {
                res = v1.coord[i] * v2.coord[i];
                sum += res;
            }
            cout << " " << sum;
        }
        void calcs(Vector v1,Vector v2)
        {
            cout << endl << endl << "Сума векторів";
            Sum(v1, v2);
            cout << endl << endl << "Різниця векторів";
            difference(v1, v2);
            cout << endl << endl << "Скалярний добуток векторів" << " =";
            scaldob(v1, v2);
            cout << endl;
        }
    };

    int main()
    {
        system("chcp 1251");
        Vector l;
        int n = l.Get_Data1(); 
        
        int array[SIZE];
        l.Get_Data2(array);
       

        Vector a(array, n);
       
        a.Print();
        a.length();

        int array_b[SIZE];
        l.Get_Data2(array_b);
      
  
        Vector b(array_b, n);
    
        b.Print();
        b.length();

        a.calcs(a, b);
       
        return 0;
    }

 






