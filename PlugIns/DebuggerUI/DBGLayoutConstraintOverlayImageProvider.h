//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBAutolayoutConcreteConstraintProvider.h"
#import "IBLayoutConstraintDrawingDestination.h"
#import "IBLayoutConstraintStatusProvider.h"

@class DBGInteractiveSceneView, DBGLayoutConstraintSet, NSMutableDictionary, NSString;

@interface DBGLayoutConstraintOverlayImageProvider : NSObject <IBAutolayoutConcreteConstraintProvider, IBLayoutConstraintDrawingDestination, IBLayoutConstraintStatusProvider>
{
    DBGLayoutConstraintSet *_constraintSet;
    NSMutableDictionary *_constraintBadgeImageCachesByTintColor;
    NSMutableDictionary *_selectedConstraintBadgeImageCachesByTintColor;
    id <DBGSceneViewControllerDataSourceProtocol> _sceneViewDataSource;
    DBGInteractiveSceneView *_sceneView;
    NSMutableDictionary *_presentedConstraintNodes;
}

@property(retain, nonatomic) NSMutableDictionary *presentedConstraintNodes; // @synthesize presentedConstraintNodes=_presentedConstraintNodes;
@property __weak DBGInteractiveSceneView *sceneView; // @synthesize sceneView=_sceneView;
@property __weak id <DBGSceneViewControllerDataSourceProtocol> sceneViewDataSource; // @synthesize sceneViewDataSource=_sceneViewDataSource;
- (void).cxx_destruct;
- (BOOL)isSelectableConstraint:(id)arg1;
- (BOOL)isSelectedConstraint:(id)arg1;
- (BOOL)isConflictingConstraint:(id)arg1;
@property(readonly, nonatomic) Class layoutConstantClass;
- (Class)layoutConstraintClass;
- (double)valueOfAttribute:(unsigned long long)arg1 forView:(id)arg2 inCoordinateSpaceOfView:(id)arg3 withUserInterfaceLayoutDirection:(long long)arg4;
- (struct CGRect)rectForDrawable:(id)arg1;
- (struct CGRect)rectForLimitedSpaceDualTBeamForDrawable:(id)arg1;
- (struct CGRect)rectForConstraintLineWithLine:(CDStruct_e3b9714e)arg1 lineThickness:(double)arg2 edgeBias:(id)arg3;
- (struct CGRect)rectForIBeamWithLine:(CDStruct_e3b9714e)arg1;
- (BOOL)isFlipped;
- (id)badgeStringConsideringFractionFormatForMultiplier:(double)arg1;
- (id)equalSizeBadge;
- (id)greaterThanOrEqualToBadge;
- (id)lessThanOrEqualToBadge;
- (id)constraintBadgeImageForRelationshipImage:(id)arg1;
- (id)constraintBadgeImageForLabel:(id)arg1 tintColor:(id)arg2 drawSelected:(BOOL)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (id)badgeImageForAspectRatioConstraint:(id)arg1 drawSelected:(BOOL)arg2 attribute:(unsigned long long)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (id)badgeImageForMisplacedConstraint:(id)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (id)badgeImageForAmbiguousConstraint:(id)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (id)badgeImageForConflictingConstraint:(id)arg1 drawSelected:(BOOL)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_d2b197d1 *)arg4;
- (id)_cachedConstraintBadgeImageByTintColor:(id)arg1 drawSelected:(BOOL)arg2 label:(id)arg3;
- (void)_setCachedConstraintBadgeImage:(id)arg1 forTintColor:(id)arg2 drawSelected:(BOOL)arg3 label:(id)arg4;
- (id)_scalableBaseConstraintBadgeImageWithTintColor:(id)arg1 drawSelected:(BOOL)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_d2b197d1 *)arg4 supportedScaleFactors:(id *)arg5;
- (struct CGRect)rectForDrawableBadge:(id)arg1;
- (struct CGRect)rectIncludingBadgeForDrawable:(id)arg1;
- (BOOL)isShowingResizeKnobs;
- (id)badgeLabelForAbstraction:(id)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (id)defaultDrawableTintColorForAbstraction:(id)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (id)colorSpecifier;
- (long long)userInterfaceLayoutDirection;
- (id)constraintOverlayView;
- (struct CGRect)layoutRectInOverlayCoordinatesForConstraintItem:(id)arg1;
- (CDStruct_e3b9714e)snappedLine:(CDStruct_e3b9714e)arg1 forFirstItem:(id)arg2 secondItem:(id)arg3;
- (void)insetDrawable:(id)arg1 ifItOverlapsGuideline:(CDStruct_e3b9714e)arg2 guidelineIsLeftOrBottom:(BOOL)arg3;
- (id)refinedDrawableFromDrawable:(id)arg1;
- (void)updateConstraintNodesUsingConstraintSet:(id)arg1 forRootViewRect:(struct CGRect)arg2;
- (id)_generateConstraintAbstractionsFromConstraintSet;
- (id)initWithConstraintSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

