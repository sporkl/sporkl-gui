/*******************************************************************************
BEGIN_JUCE_MODULE_DECLARATION

ID:               sporkl_gui 
vendor:           sporklpony
version:          0.1
name:             Sporkl Look and Feel
description:      Custom look and feel for personal projects.
dependencies:     juce_graphics juce_gui_basics

END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once
#define SPORKL_GUI_INCLUDED

// const juce::Colour LIGHT_COLOR = juce::Colour(230, 225, 220);
// const juce::Colour DARK_COLOR = juce::Colour(43, 43, 43);
// const juce::Colour ACCENT_COLOR = juce::Colour(166, 193, 102);
// const juce::Colour BLUE_COLOR = juce::Colour(119, 187, 221);

// see how getDarkColourScheme, etc. do it in LookAndFeel-V$.cpp
// or consider original approach of subclasing V4 but make sure to call update colorscheme method (check V4 source to see what it was called)

class LookAndFeel_Sporkl : public juce::LookAndFeel_V4
{

    const int LIGHT_COLOR = 0xffe6e1dc;
    const int DARK_COLOR = 0xff2b2b2b;
    const int ACCENT_COLOR = 0xffa6c166;
    const int OTHER_COLOR = 0xff77bbdd;

public:
    LookAndFeel_Sporkl()
    {
        setColourScheme({
            LIGHT_COLOR, // windowBackground
            LIGHT_COLOR, // widgetBackground
            LIGHT_COLOR, // menuBackground
            DARK_COLOR, // outline
            DARK_COLOR, // defaultTex
            ACCENT_COLOR, // defaultFill
            DARK_COLOR, // highlightedText
            ACCENT_COLOR, // highlightedFill
            DARK_COLOR // menuText
        });
        
        setColour(juce::Slider::backgroundColourId, juce::Colour(DARK_COLOR));
    };

    ~LookAndFeel_Sporkl() { };
};
