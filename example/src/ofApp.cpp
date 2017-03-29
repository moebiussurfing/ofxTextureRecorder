#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofxTextureRecorder::Settings settings(ofGetWidth(), ofGetHeight());
	settings.pixelFormat = OF_PIXELS_RGB;
	settings.imageFormat = OF_IMAGE_FORMAT_PNG;

	recorder.setup(settings);
	fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
}

//--------------------------------------------------------------
void ofApp::update(){
	fbo.begin();
	ofClear(0);
	ofDrawCircle(ofGetFrameNum(), ofGetWidth()/2, 50);
	fbo.end();
	recorder.save(fbo.getTexture());
	if(ofGetFrameNum()>ofGetWidth() + 50){
		ofExit(0);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	fbo.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
