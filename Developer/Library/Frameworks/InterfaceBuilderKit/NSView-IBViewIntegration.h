//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (IBViewIntegration)
+ (id)affineTransformToUserspaceForViews:(id)arg1;
- (void)didPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibDidAddToDesignableDocument:(id)arg1;
- (void)ibAwakeInDesignableDocument:(id)arg1;
- (void)captureInitialResizeActionIfNecessary;
- (BOOL)ibShouldIncludeKeyPathInIbtoolPrintingOutput:(id)arg1;
- (BOOL)ibDocument:(id)arg1 shouldPersistMetadataWithKey:(id)arg2;
- (void)setLastResizeAction:(id)arg1;
- (id)lastResizeAction;
- (void)ibRemoveChildren:(id)arg1;
- (id)ibViewFromPasteboardImageResource:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)shouldTranslateFrameOfView:(id)arg1 toTargetSuperview:(id)arg2 usingPreviousParentsToViewMap:(id)arg3 outFrame:(struct CGRect *)arg4;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1;
- (BOOL)ibIsDistanceFromEdge:(unsigned long long)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg3;
- (BOOL)ibIsEdge:(unsigned long long)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg3;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviewsWhileGrowingFromKnob:(long long)arg1 inDocument:(id)arg2;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (id)ibObjectAtLocation:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (void)removeUserGuide:(id)arg1;
- (void)addUserGuide:(id)arg1;
- (void)setUserGuides:(id)arg1;
- (id)userGuides;
- (long long)ibPreferredResizeDirection;
- (struct CGSize)ibPreferredSizeRespectingNearestLegalBoundsSize;
- (struct CGSize)ibNearestLegalBoundsSize;
- (struct CGPoint)ibPreferredDesignOriginForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredDesignSize;
- (void)ibConstrainBoundsToNearestLegalSize;
- (void)ibSuggestLayout;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1 andOrigin:(struct CGPoint)arg2;
- (void)ibDidSuggestLayout:(id)arg1;
- (id)ibWillSuggestLayout:(struct CGRect)arg1;
- (id)ibEditorWindowSizeVerificationKeyPath;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibIssueOverlappingViewWarning:(id)arg1 forSibling:(id)arg2 withParentView:(id)arg3 inDocument:(id)arg4 withComputationContext:(id)arg5;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)isClippingDesignableContent;
- (BOOL)canEditInPersonalWindow;
- (id)editorWindowControllerForDocument:(id)arg1;
- (BOOL)isVerticallyResizable;
- (BOOL)isHorizontallyResizable;
- (struct CGRect)frameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)boundsForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)layoutFrameForFrame:(struct CGRect)arg1;
- (void)setLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)layoutBoundsForBounds:(struct CGRect)arg1;
- (struct CGRect)layoutFrame;
- (struct CGRect)layoutBounds;
- (BOOL)isBaselineAtIndex:(long long)arg1 inMotionWithKnob:(long long)arg2;
- (double)ibBaselineAtIndex:(long long)arg1;
- (long long)ibBaselineCount;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)ibExtremumSizeForWidgetType:(id)arg1 maximum:(BOOL)arg2;
- (struct IBInsetTag)ibLayoutInset;
- (struct IBInsetTag)ibLayoutInsetForWidgetType:(id)arg1;
- (id)layoutInsetString;
- (id)designableAttributesConfiguration;
- (void)takePastedAttributes:(id)arg1;
- (id)containerWidgetType;
- (id)widgetType;
- (id)ibPasteboardTypes;
- (struct CGRect)ibInspectedRectBySettingSize:(struct CGSize)arg1 fromKnob:(long long)arg2 ofRect:(struct CGRect)arg3;
- (struct CGRect)ibInspectedRectBySettingPoint:(struct CGPoint)arg1 forKnob:(long long)arg2 ofRect:(struct CGRect)arg3;
- (struct CGPoint)ibInspectedPointForKnob:(long long)arg1 onRect:(struct CGRect)arg2;
- (BOOL)isMovable;
- (BOOL)isSizable;
- (BOOL)isUserSizable;
- (BOOL)isUserMovable;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (struct IBInsetTag)ibInsetToDesignableContentArea;
- (id)ibDesignableContentView;
- (id)container;
- (id)ibDefaultLabel;
- (id)ibDefaultImage;
- (Class)ibEditorClass;
- (Class)trackerClass;
@end

