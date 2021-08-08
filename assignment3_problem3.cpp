#include <iostream>
using namespace std;

inline int cube(int side)
{
  return side*side*side;
}

inline int cuboid(int length, int breadth, int height)
{
  return length*breadth*height;
}

inline float sphere(int radius)
{
  return (4/3)*(3.14)*(radius*radius*radius);
}

inline float hemisphere(int radius)
{
  return (0.5)*(4/3)*(3.14)*(radius*radius*radius);

}

inline float cylinder(int radius, int ht)
{
  return (3.14)*(radius*radius)*ht;
}

inline float cone(int radius, int ht)
{
  return (3.14)*(radius*radius)*ht;
}

int main() 
{
  int op;
  do
  {
    cout << "\n\nVolume of: \n1.Cube of side length 5 units\n2.Cuboid of length 2 units, breadth of 3 units and height of 4 units\n3.Sphere of radius 5 units\n4.Hemi-sphere of radius 5 units\n5.Cylinder of radius 5 units and height 10 units\n6.Cone of radius 5 units and height 10 units\n7.EXIT\n\n-->";
    cin>>op;

    switch(op)
    {
      case 1:
      { 
        int vol_cube = cube(5);
        cout<<"Volume of this cube is: "<<vol_cube;
        break;
      }

      case 2:
      {
        int vol_cuboid = cuboid(2,3,4);
        cout<<"Volume of this cuboid is: "<<vol_cuboid;
        break;
      }

      case 3:
      {  
        float vol_sphere = sphere(5);
        cout<<"Volume of this sphere is: "<<vol_sphere;
        break;
      }
      
      case 4:
      {  
        float vol_hemisphere = hemisphere(5);
        cout<<"Volume of this hemisphere is: "<<vol_hemisphere;
        break;
      }
      
      case 5:
      { 
        float vol_cylinder = cylinder(5,10);
        cout<<"Volume of this cylinder is: "<<vol_cylinder;
        break;
      }
      case 6:
      {  
        float vol_cone = cone(5, 10);
        cout<<"Volume of this cone is: "<<vol_cone;
        break;
      }
      case 7:
      {
        cout<<"Program Terminated ";
        break;
      }
    }
  }while(op!=7);  


  
}