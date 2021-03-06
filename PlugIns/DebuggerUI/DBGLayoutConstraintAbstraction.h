//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractLayoutConstraintAbstraction.h"

@class DBGLayoutConstraint, DBGOverlayLayoutConstraint;

@interface DBGLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    DBGOverlayLayoutConstraint *dbgConstraint;
    DBGLayoutConstraint *_constraintModel;
}

@property(readonly, nonatomic) DBGLayoutConstraint *constraintModel; // @synthesize constraintModel=_constraintModel;
- (void).cxx_destruct;
- (id)constraintInDocument;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (double)priority;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (Class)representationClass;
- (id)initWithConstraintModel:(id)arg1;

@end

