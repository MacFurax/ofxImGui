#pragma once

#include "ofMain.h"
#include "imgui.h"


class BaseTheme
{
public:
    BaseTheme();
    virtual ~BaseTheme(){
    
    };
    
    virtual void setup();
    void themeColorsWindow(bool isOpen);

    void updateColors();
    
    ofColor col_main_text;
    ofColor col_main_head;
    ofColor col_main_area;
    ofColor col_win_popup;
    ofColor col_win_backg;
    
    ImVec4 convertColor(ofColor& color, float alpha);
    ofColor convertColor(ImVec4& vec4);
    ImVec4 convertColor(ofColor& color);
    bool addColorEdit(string label, ofColor& color);
    ofColor convertColor(float* f);

};
