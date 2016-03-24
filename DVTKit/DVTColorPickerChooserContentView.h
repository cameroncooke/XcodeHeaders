//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSColor;

@interface DVTColorPickerChooserContentView : NSView
{
    NSArray *swatchViews;
    NSColor *clickedColor;
    id target;
    SEL action;
}

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)clickedColor;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)userChooseSwatch:(id)arg1;
- (id)initWithColors:(id)arg1 suggestedColors:(id)arg2 andFrame:(struct CGRect)arg3;

@end
