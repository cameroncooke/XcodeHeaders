//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HexFiend/HFRepresenter.h>

@interface HFStatusBarRepresenter : HFRepresenter
{
    unsigned long long statusMode;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)controllerDidChange:(unsigned long long)arg1;
- (void)setStatusMode:(unsigned long long)arg1;
- (unsigned long long)statusMode;
- (void)updateString;
- (id)stringForMultipleSelectionsWithLength:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)stringForSingleRangeSelection:(CDStruct_91ee6ea3)arg1 length:(unsigned long long)arg2;
- (id)stringForSingleByteSelectionAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)stringForEmptySelectionAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)describeOffsetExcludingApproximate:(unsigned long long)arg1;
- (id)describeOffset:(unsigned long long)arg1;
- (id)describeLength:(unsigned long long)arg1;
- (id)createView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

