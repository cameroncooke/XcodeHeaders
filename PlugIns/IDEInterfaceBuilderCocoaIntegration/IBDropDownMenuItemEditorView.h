//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBMenuItemEditorView.h>

@class NSFont;

@interface IBDropDownMenuItemEditorView : IBMenuItemEditorView
{
    NSFont *font;
    double keyEquivalentOffset;
    double keyEquivalentKeyWidth;
}

+ (void)layoutItemViewsCollectively:(id)arg1 minimumFixedDimensionMagnitude:(double)arg2;
+ (double)singleLineHeightForFont:(id)arg1;
@property(copy, nonatomic) NSFont *font; // @synthesize font;
@property double keyEquivalentKeyWidth; // @synthesize keyEquivalentKeyWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)submenuIndicatorPath;
- (void)drawStateImage;
- (unsigned int)effectiveThemeDrawingStateForStateImage;
- (id)effectiveSeparatorColor;
- (struct CGRect)keyEquivalentBorderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)keyEquivalentHitTestRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleHitTestRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)keyEquivalentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)submenuIndicatorRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)stateImageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)submenuIndicatorSize;
- (struct CGSize)idealSize;
- (struct CGSize)stateImageSize;
- (struct CGSize)titleSize;
- (struct CGSize)keyEquivalentSize;
- (long long)singleKeyEquivalentModifierWidth;
- (long long)singleLineHeight;
- (double)keyEquivalentRightInset;
- (BOOL)isFlipped;
- (void)setHighlighted:(BOOL)arg1;
- (void)setDrawsKeyEquivalentRect:(BOOL)arg1;
- (void)setKeyEquivalentOffset:(double)arg1;
- (id)attributedTitle;
- (id)textAttributes;
- (id)effectiveTextColor;
- (id)effectiveFont;
- (id)initWithMenuItem:(id)arg1;

@end

