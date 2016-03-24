//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSPopUpButton, NSSlider, NSStepper, NSTextField, SCNRendererOptionsPanel, SCNView;

__attribute__((visibility("hidden")))
@interface SCNRendererOptionsPanelController : NSObject
{
    SCNView *_3dView;
    SCNRendererOptionsPanel *_panel;
    NSPopUpButton *antialiasingLevels;
    NSTextField *benchResult;
    NSSlider *seekSlider;
    NSStepper *seekStepper;
    NSButton *isolate;
    NSButton *freezeButton;
    BOOL _viewLocked;
    unsigned int _currentSeekStep;
}

- (void)isolate:(id)arg1;
- (void)close:(id)arg1;
- (void)setSeekStep:(unsigned long long)arg1;
- (unsigned long long)seekStep;
- (void)updateSeek;
- (void)capture:(id)arg1;
- (void)runBench:(id)arg1;
- (void)setAntialiasingLevel:(id)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (void)selectCamera:(id)arg1;
- (void)showBoundingSpheresToggled:(id)arg1;
- (void)disablePassesToggle:(id)arg1;
- (void)SSAOToggled:(id)arg1;
- (void)hideSpriteKitOverlaysToggled:(id)arg1;
- (void)showWireframeToggled:(id)arg1;
- (void)showLightingLayerToggled:(id)arg1;
- (void)showPhysicsLayerToggled:(id)arg1;
- (void)showBoundingBoxesToggled:(id)arg1;
- (void)toggleRetina:(id)arg1;
- (void)enableVBL:(id)arg1;
- (void)GLOWToggled:(id)arg1;
- (void)recompilePasses;
@property(retain) SCNView *view;
- (id)panel;
- (struct __C3DRendererContext *)rendererContext;
- (struct __C3DEngineContext *)context;
- (void)sceneDidChange;
- (void)dealloc;
- (id)init;

@end

