//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBContentSizeLayoutConstraintAbstraction.h>

@interface IBContentHuggingLayoutConstraintAbstraction : IBContentSizeLayoutConstraintAbstraction
{
    double _huggingPriority;
}

@property(nonatomic) double huggingPriority; // @synthesize huggingPriority=_huggingPriority;
- (double)priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithView:(id)arg1 contentSize:(double)arg2 attribute:(unsigned long long)arg3 huggingPriority:(double)arg4;

@end

