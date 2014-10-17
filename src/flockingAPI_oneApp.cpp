#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class flockingAPI_oneApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void flockingAPI_oneApp::setup()
{
}

void flockingAPI_oneApp::mouseDown( MouseEvent event )
{
}

void flockingAPI_oneApp::update()
{
}

void flockingAPI_oneApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( flockingAPI_oneApp, RendererGl )
