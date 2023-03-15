# sporkl_gui

Simple juce module with a custom look and feel, just changing the colors of JUCE's LookAndFeel_V4. Should be easy to fork and tweak the colors for one's own purposes, if desired.

To use in a project, simply include the module, add this as a member to your parentmost Component, and in the parentmost Component's constructor, call `setDefaultLookAndFeel(&<NAME>)`, where `<NAME>` is whatever you decided to call the instance.

