/**********************************************************************************
 
 Copyright (C) 2012 Syed Reza Ali (www.syedrezaali.com)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 **********************************************************************************/

#pragma once

#ifndef OFX_UI_NO_XML
    #include "ofxXmlSettings.h"
#endif

#define OFX_UI_STATE_NORMAL 0
#define OFX_UI_STATE_OVER 1
#define OFX_UI_STATE_DOWN 2
#define OFX_UI_STATE_SUSTAINED 3

#define OFX_UI_GLOBAL_PADDING 2
#define OFX_UI_GLOBAL_WIDGET_SPACING 4
#define OFX_UI_GLOBAL_CANVAS_WIDTH 211
#define OFX_UI_GLOBAL_SLIDER_HEIGHT 16
#define OFX_UI_GLOBAL_GRAPH_HEIGHT 64
#define OFX_UI_GLOBAL_BUTTON_DIMENSION 16
#define OFX_UI_GLOBAL_SPACING_HEIGHT 1

#define OFX_UI_COLOR_BACK_ALPHA 100
#define OFX_UI_COLOR_OUTLINE_ALPHA 100
#define OFX_UI_COLOR_OUTLINE_HIGHLIGHT_ALPHA 200
#define OFX_UI_COLOR_FILL_ALPHA 200
#define OFX_UI_COLOR_FILL_HIGHLIGHT_ALPHA 255
#define OFX_UI_COLOR_PADDED_ALPHA 100
#define OFX_UI_COLOR_PADDED_OUTLINE_ALPHA 200

#define OFX_UI_COLOR_BACK ofxUIColor(0, OFX_UI_COLOR_BACK_ALPHA)                                        //rect's back color
#define OFX_UI_COLOR_OUTLINE ofxUIColor(255, 255, 255, OFX_UI_COLOR_OUTLINE_ALPHA)                      //rect's outline color
#define OFX_UI_COLOR_OUTLINE_HIGHLIGHT ofxUIColor(255, 255, 255, OFX_UI_COLOR_OUTLINE_HIGHLIGHT_ALPHA)  //rect's onMouseOver outline highlight color
#define OFX_UI_COLOR_FILL ofxUIColor(255, 255, 255, OFX_UI_COLOR_FILL_ALPHA)                            //rect's fill color
#define OFX_UI_COLOR_FILL_HIGHLIGHT ofxUIColor(255, 255, 255, OFX_UI_COLOR_FILL_HIGHLIGHT_ALPHA)        //rect's onMouseDown highlight color
#define OFX_UI_COLOR_PADDED ofxUIColor(0, OFX_UI_COLOR_PADDED_ALPHA)                                    //rect's padded color
#define OFX_UI_COLOR_PADDED_OUTLINE ofxUIColor(255, OFX_UI_COLOR_PADDED_OUTLINE_ALPHA)                  //rect's padded outline color


#define OFX_UI_DRAW_PADDING false
#define OFX_UI_DRAW_PADDING_OUTLINE false

#define OFX_UI_TEXTINPUT_ON_ENTER 0
#define OFX_UI_TEXTINPUT_ON_FOCUS 1
#define OFX_UI_TEXTINPUT_ON_UNFOCUS 2
#define OFX_UI_TEXTINPUT_ON_LOAD 3

#define OFX_UI_NUM_OF_THEMES 45

enum ofxUIWidgetType
{
	OFX_UI_WIDGET_LABEL = 0,
	OFX_UI_WIDGET_CANVAS,
	OFX_UI_WIDGET_TOGGLE,
	OFX_UI_WIDGET_BUTTON,
	OFX_UI_WIDGET_SLIDER_H,
	OFX_UI_WIDGET_SLIDER_V,
	OFX_UI_WIDGET_RSLIDER_H,
	OFX_UI_WIDGET_RSLIDER_V,
	OFX_UI_WIDGET_NUMBERDIALER,
	OFX_UI_WIDGET_RADIO,
	OFX_UI_WIDGET_FPS,
	OFX_UI_WIDGET_2DPAD,
	OFX_UI_WIDGET_TEXTINPUT,
	OFX_UI_WIDGET_WAVEFORM,
	OFX_UI_WIDGET_SPECTRUM,
	OFX_UI_WIDGET_IMAGE,
    OFX_UI_WIDGET_LABELBUTTON,
    OFX_UI_WIDGET_LABELTOGGLE,
    OFX_UI_WIDGET_TOGGLEMATRIX,
    OFX_UI_WIDGET_IMAGEBUTTON,
    OFX_UI_WIDGET_IMAGETOGGLE,
    OFX_UI_WIDGET_ROTARYSLIDER,
    OFX_UI_WIDGET_DROPDOWNLIST,
    OFX_UI_WIDGET_SPACER,
    OFX_UI_WIDGET_MOVINGGRAPH,
    OFX_UI_WIDGET_MINIMALSLIDER,
    OFX_UI_WIDGET_BILABELSLIDER,
    OFX_UI_WIDGET_CIRCLESLIDER,
    OFX_UI_WIDGET_IMAGESAMPLER,
	OFX_UI_WIDGET_SCROLLABLECANVAS,
    OFX_UI_WIDGET_MULTIIMAGEBUTTON,
    OFX_UI_WIDGET_MULTIIMAGETOGGLE,
    OFX_UI_WIDGET_IMAGESLIDER_H,
    OFX_UI_WIDGET_IMAGESLIDER_V,
    OFX_UI_WIDGET_CUSTOMIMAGEBUTTON,
    OFX_UI_WIDGET_TEXTAREA,
    OFX_UI_WIDGET_CUSTOMWIDGET,
    OFX_UI_WIDGET_BASE_DRAWS,
    OFX_UI_WIDGET_VALUEPLOTTER,
    OFX_UI_WIDGET_2DGRAPH,
    OFX_UI_WIDGET_SUPERCANVAS,
    OFX_UI_WIDGET_TABBAR,
    OFX_UI_WIDGET_INTSLIDER_H,
	OFX_UI_WIDGET_INTSLIDER_V,
    OFX_UI_WIDGET_DOUBLESLIDER_H,
	OFX_UI_WIDGET_DOUBLESLIDER_V,
    OFX_UI_WIDGET_SORTABLELIST,
    OFX_UI_WIDGET_DRAGABLELABELBUTTON,
    OFX_UI_WIDGET_ENVELOPEEDITOR
};

enum ofxUIWidgetOrientation
{
	OFX_UI_ORIENTATION_VERTICAL = 0,
	OFX_UI_ORIENTATION_HORIZONTAL = 1
};

enum ofxUIWidgetInputDirection
{
	OFX_UI_DIRECTION_NORTHSOUTH = 0,
	OFX_UI_DIRECTION_SOUTHNORTH = 1,
	OFX_UI_DIRECTION_EASTWEST = 2,
	OFX_UI_DIRECTION_WESTEAST = 3
};

enum ofxUIWidgetAlignment
{
	OFX_UI_ALIGN_LEFT = 0,
	OFX_UI_ALIGN_FREE = 1,
	OFX_UI_ALIGN_RIGHT = 2,
    OFX_UI_ALIGN_TOP = 3,
    OFX_UI_ALIGN_BOTTOM = 4,
    OFX_UI_ALIGN_CENTER = 5
};

enum ofxUIWidgetPosition
{
	OFX_UI_WIDGET_POSITION_DOWN = 0,
	OFX_UI_WIDGET_POSITION_UP = 1,
	OFX_UI_WIDGET_POSITION_LEFT = 2,
	OFX_UI_WIDGET_POSITION_RIGHT = 3
};

enum ofxUIWidgetFontType
{
	OFX_UI_FONT_LARGE = 0,
	OFX_UI_FONT_MEDIUM = 1,
	OFX_UI_FONT_SMALL = 2
};

enum ofxUIWidgetColorType
{
	OFX_UI_WIDGET_COLOR_BACK = 0,
	OFX_UI_WIDGET_COLOR_OUTLINE = 1,
	OFX_UI_WIDGET_COLOR_OUTLINE_HIGHLIGHT = 2,
	OFX_UI_WIDGET_COLOR_FILL = 3,
	OFX_UI_WIDGET_COLOR_FILL_HIGHLIGHT = 4,
    OFX_UI_WIDGET_COLOR_PADDED = 5,
	OFX_UI_WIDGET_COLOR_PADDED_OUTLINE = 6
    
};

enum ofxUITriggerType
{
    OFX_UI_TRIGGER_NONE     = 0x00,
    OFX_UI_TRIGGER_BEGIN    = 0x01,
    OFX_UI_TRIGGER_CHANGE   = 0x02,
    OFX_UI_TRIGGER_END      = 0x04,
    OFX_UI_TRIGGER_ALL      = 0x07
};

#define ofxUITriggerType int

enum ofxUIThemeType
{
    OFX_UI_THEME_DEFAULT = 0,
    OFX_UI_THEME_HACKER,
    OFX_UI_THEME_HIPSTER,
    OFX_UI_THEME_DIETER,
    OFX_UI_THEME_BARBIE,
    OFX_UI_THEME_WINDOWS,
    OFX_UI_THEME_MACOSX,
    OFX_UI_THEME_ZOOLANDER,
    OFX_UI_THEME_VEGAN,
    OFX_UI_THEME_BERLIN,
    OFX_UI_THEME_METALGEAR,
    OFX_UI_THEME_TEALLIME,
    OFX_UI_THEME_VEGAN2,
    OFX_UI_THEME_RUSTIC,
    OFX_UI_THEME_MIDNIGHT,
    OFX_UI_THEME_MINBLUE,
    OFX_UI_THEME_LIMESTONE,
    OFX_UI_THEME_SPEARMINT,
    OFX_UI_THEME_MINPINK,
    OFX_UI_THEME_PEPTOBISMOL,
    OFX_UI_THEME_BILEBLUE,
    OFX_UI_THEME_COOLCLAY,
    OFX_UI_THEME_BLUEBLUE,
    OFX_UI_THEME_PINKPANTHER,
    OFX_UI_THEME_MAROON,
    OFX_UI_THEME_PINKLATTE,
    OFX_UI_THEME_MINGREEN,
    OFX_UI_THEME_HELLOYELLOW,
    OFX_UI_THEME_TEALTEAL,
    OFX_UI_THEME_RUSTICORANGE,
    OFX_UI_THEME_TEALSALMON,
    OFX_UI_THEME_CITRUSBLUE,
    OFX_UI_THEME_LIMEPURPLE,
    OFX_UI_THEME_LIMESTONE2,
    OFX_UI_THEME_COOLPURPLE,
    OFX_UI_THEME_GRAYRED,
    OFX_UI_THEME_METALGEAR2,
    OFX_UI_THEME_LIGHTPINK,
    OFX_UI_THEME_MINPINK2,
    OFX_UI_THEME_MAXPINK,
    OFX_UI_THEME_MINYELLOW,
    OFX_UI_THEME_MINLIME,
    OFX_UI_THEME_MINORANGE,
    OFX_UI_THEME_GRAYDAY,
    OFX_UI_THEME_MINBLACK
};

#ifdef TARGET_OF_IOS
    #define OFX_UI_FONT_NAME "GUI/Helvetica.ttf"
#else
    #define OFX_UI_FONT_NAME "sans-serif"
#endif

#define OFX_UI_FONT_RESOLUTION 150
#define OFX_UI_FONT_LARGE_SIZE 10
#define OFX_UI_FONT_MEDIUM_SIZE 8
#define OFX_UI_FONT_SMALL_SIZE 6

#define OFX_UI_LABEL_DRAW_BACK false