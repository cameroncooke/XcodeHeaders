//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSDictionary, NSSet, NSString;

@interface IBAutolayoutAmbiguityGroup : NSObject <IBBinaryArchiving>
{
    NSDictionary *_ambiguousViewsToAmbiguityStatus;
    NSSet *_constraintAbstractionsAffectingLayout;
    NSSet *_inequalityConstraintsResolvingAmbiguity;
    NSSet *_contentSizePriorityChangesResolvingAmbiguity;
    unsigned long long _orientationMask;
}

@property(readonly, nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(readonly, nonatomic) NSSet *contentSizePriorityChangesResolvingAmbiguity; // @synthesize contentSizePriorityChangesResolvingAmbiguity=_contentSizePriorityChangesResolvingAmbiguity;
@property(readonly, nonatomic) NSSet *inequalityConstraintsResolvingAmbiguity; // @synthesize inequalityConstraintsResolvingAmbiguity=_inequalityConstraintsResolvingAmbiguity;
@property(readonly, nonatomic) NSSet *constraintAbstractionsAffectingLayout; // @synthesize constraintAbstractionsAffectingLayout=_constraintAbstractionsAffectingLayout;
@property(readonly, nonatomic) NSDictionary *ambiguousViewsToAmbiguityStatus; // @synthesize ambiguousViewsToAmbiguityStatus=_ambiguousViewsToAmbiguityStatus;
- (void).cxx_destruct;
- (id)ambiguityGroupByRemovingReferencesToItem:(id)arg1;
- (id)viewsWithScrollableContentSizeAmbiguity;
- (id)viewsCompletelyMissingConstraintsForSomeVariables;
- (id)setsOfNonRequiredConstraintAbstractionsWithEqualPrioritiesUsingLayoutInfo:(id)arg1;
- (id)ambiguityStatusForView:(id)arg1;
- (void)enumerateAmbiguousViewsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isVertical) BOOL vertical;
@property(readonly, nonatomic, getter=isHorizontal) BOOL horizontal;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAmbiguityGroup:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithAmbiguousViewsToAmbiguityStatus:(id)arg1 constraintAbstractionsAffectingLayout:(id)arg2 orientationMask:(unsigned long long)arg3;
- (id)initWithAmbiguousViewsToAmbiguityStatus:(id)arg1 constraintAbstractionsAffectingLayout:(id)arg2 inequalityConstraintsResolvingAmbiguity:(id)arg3 contentSizePriorityChangesResolvingAmbiguity:(id)arg4 orientationMask:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

