#include <iostream>
using namespace std;

int cube(int side)
{
  //return radius*radius*radius;
  return side*side*side;
}

int cuboid(int length, int breadth, int height)
{
  return length*breadth*height;
}

float sphere(int radius)
{
  return (4/3)*(3.14)*(radius*radius*radius);
}

float hemisphere(int radius)
{
  return (0.5)*(4/3)*(3.14)*(radius*radius*radius);

}

float cylinder(int radius, int ht)
{
  return (3.14)*(radius*radius)*ht;
}

float cone(int radius, int ht)
{
  return (3.14)*(radius*radius)*ht;
}

int main() 
{
  int op;
  do
  {
    cout << "\n\nFind the volume of: \n1.Cube\n2.Cuboid\n3.Sphere\n4.Hemi-sphere\n5.Cylinder\n6.Cone\n7.EXIT\n\n-->";
    cin>>op;

    switch(op)
    {
      case 1:
      { 
        int a;
        cout<<"Side of the Cube: ";
        cin>>a;
        int vol_cube = cube(a);
        cout<<"Volume of this cube is: "<<vol_cube;
        break;
      }

      case 2:
      {
        int l,b,h;
        cout<<"Length of the cuboid: ";
        cin>>l;
        cout<<"Breadth of the cuboid: ";
        cin>>b;
        cout<<"Height of the cuboid: ";
        cin>>h;
        int vol_cuboid = cuboid(l,b,h);
        cout<<"Volume of this cuboid is: "<<vol_cuboid;
        break;
      }

      case 3:
      {  
        int r;
        cout<<"Radius of Sphere: ";
        cin>>r;
        float vol_sphere = sphere(r);
        cout<<"Volume of this sphere is: "<<vol_sphere;
        break;
      }
      
      case 4:
      {  
        int r;
        cout<<"Radius of Hemi-Sphere: ";
        cin>>r;
        float vol_hemisphere = hemisphere(r);
        cout<<"Volume of this hemisphere is: "<<vol_hemisphere;
        break;
      }
      
      case 5:
      { 
        int r;
        int h;
        cout<<"Base Radius of the Cylinder: ";
        cin>>r;
        cout<<"Height of the cylinder: ";
        cin>>h;
        float vol_cylinder = cylinder(r,h);
        cout<<"Volume of this cylinder is: "<<vol_cylinder;
        break;
      }
      case 6:
      {  
        int r;
        int h;
        cout<<"Base Radius of the Cone: ";
        cin>>r;
        cout<<"Perpendicular Height of the Cone: ";
        cin>>h;
        float vol_cone = cone(r, h);
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