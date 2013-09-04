#include <gl\GL.h>
#include <gl\glut.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

namespace gl
{
	class GLMesh
   {
   public:

	class GLvertexes 
	{
	public:
		float x,y,z;

	};

	class GLnormals
	{
		
	public:
		float x,y,z;

	};
	
	class GLtriangles
	{
		public:
		float x,y,z;

	};
	
	class GLpolygons
	{
		
		public:
		float x,y,z,w;

	};
	
	class GLindices
	{
		public:
		float x,y,z;

	};
	
	class GLtexture
	{
	public:
	   const char filename;
	   enum Formats
		{
			BUMP,
			TGA,
			DDS,
			JPG,
			JPEG,
			PNG
		};

	};
	
	class GLuv
	{
		public:
		int x,y;

	};
	
	class GLshader
	{
		public:
	};
	
	class GLmaterial
	{
		public:
		vector<GLtexture> GLtexturevector;
		vector<GLshader> GLshadervector;

	};

	class GLvectors
	{
	   public:

	};

	void addvertex(vector<GLvertexes>,int position);
	void addpolygon(vector<GLpolygons>,int position);
	void addindices(vector<GLindices>,int position);
	void addtriangles(vector<GLtriangles>,int position);
	void addnormals(vector<GLnormals>,int position);
	void RenderElement (void);
	void RenderArray (void);
	int numberofVertexes(void);
	int numberofNormals(void);
	int numberofPolygons(void);
	int numberofTriangles(void);
	int numberofIndices(void);

   private:

		   vector<GLvertexes> vert;
		   vector<GLpolygons> pol;
		   vector<GLindices> ind;
		   vector<GLtriangles> tri;
		   vector<GLnormals> norm;

   };
	class GLWriter :ofstream
	{
	public:
       void writeGLfile(char filename);
	};
	class GLReader :ofstream 
	{
	public:
	   void readGlfile(char filename);
	};
};