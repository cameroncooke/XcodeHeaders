//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBAutoLayoutView.h>

@class IBSlateScroller, NSView;

@interface IBSlateScrollView : IBAutoLayoutView
{
    IBSlateScroller *vertScroller;
    IBSlateScroller *horzScroller;
    NSView *clipView;
    BOOL autohidesScrollers;
    BOOL allowRoomForGrowBox;
    BOOL hasVerticalScroller;
    BOOL hasHorizontalScroller;
    double scrollerSize;
}

- (void)scrollWheel:(id)arg1;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasHorizontalScroller;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setAllowRoomForGrowBox:(BOOL)arg1;
- (BOOL)allowRoomForGrowBox;
- (void)setAutohidesScrollers:(BOOL)arg1;
- (BOOL)autohidesScrollers;
- (void)drawRect:(struct CGRect)arg1;
- (id)contentView;
- (id)verticalScroller;
- (id)horizontalScroller;
- (void)setDocumentView:(id)arg1;
- (id)documentView;
- (void)setScrollerSize:(double)arg1;
- (double)scrollerSize;
- (void)setScrollPosition:(struct CGSize)arg1;
- (struct CGSize)scrollPosition;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollVertically:(id)arg1;
- (void)scrollHorizontally:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layout;
- (void)adjustKnobs;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)growBoxRect;
- (struct CGRect)vertScrollerRect;
- (struct CGRect)horzScrollerRect;
- (struct CGRect)contentRect;
- (double)borderSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

