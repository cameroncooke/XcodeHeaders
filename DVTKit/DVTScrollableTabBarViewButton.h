//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class CALayer, DVTTabbedWindowTabViewItem, NSColor, ViewActionForwardingLayerDelegate;

@interface DVTScrollableTabBarViewButton : NSButton
{
    ViewActionForwardingLayerDelegate *_layerDelegate;
    NSColor *_backgroundColor;
    CALayer *_backgroundLayer;
    CALayer *_centerLayer;
    CALayer *_leftBorderLayer;
    CALayer *_rightBorderLayer;
    CALayer *_topBorderLayer;
    CALayer *_bottomBorderLayer;
    BOOL _active;
    BOOL _showsLeftSeparator;
    BOOL _showsRightSeparator;
    BOOL _hasMouseOverHighlight;
    BOOL _mouseOverHighlightShouldIncludeRightBorderFrameWidth;
    BOOL _forceRepaintWithActiveWindowAppearance;
    DVTTabbedWindowTabViewItem *_tabViewItem;
}

+ (double)contentBoundsWidthForButtonWidth:(double)arg1;
+ (Class)cellClass;
@property(nonatomic) BOOL forceRepaintWithActiveWindowAppearance; // @synthesize forceRepaintWithActiveWindowAppearance=_forceRepaintWithActiveWindowAppearance;
@property(nonatomic) DVTTabbedWindowTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
@property(nonatomic) BOOL mouseOverHighlightShouldIncludeRightBorderFrameWidth; // @synthesize mouseOverHighlightShouldIncludeRightBorderFrameWidth=_mouseOverHighlightShouldIncludeRightBorderFrameWidth;
@property(nonatomic) BOOL hasMouseOverHighlight; // @synthesize hasMouseOverHighlight=_hasMouseOverHighlight;
@property(nonatomic) BOOL showsRightSeparator; // @synthesize showsRightSeparator=_showsRightSeparator;
@property(nonatomic) BOOL showsLeftSeparator; // @synthesize showsLeftSeparator=_showsLeftSeparator;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_setBackgroundColor:(id)arg1 withAnimation:(id)arg2;
- (BOOL)_isAnimatingBackgroundColor;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateBackgroundLayerImagesForActiveTab:(BOOL)arg1 inActiveWindow:(BOOL)arg2;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_windowChangedKeyState;
- (double)rightCapWidth;
- (double)leftCapWidth;
- (struct CGRect)contentBounds;
- (void)_setUpBackgroundLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

