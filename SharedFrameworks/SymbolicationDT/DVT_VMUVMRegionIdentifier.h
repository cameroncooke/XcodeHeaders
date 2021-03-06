//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray;

@interface DVT_VMUVMRegionIdentifier : NSObject
{
    unsigned int _task;
    int _pid;
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
    BOOL _hasFractionalPageSizes;
}

+ (id)descriptionForRange:(struct _VMURange)arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned int)arg4;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)descriptionForRange:(struct _VMURange)arg1 options:(unsigned long long)arg2;
- (id)descriptionForRange:(struct _VMURange)arg1;
- (int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2;
- (BOOL)hasFractionalPageSizes;
- (id)regions;
- (void)dealloc;
- (id)initWithGraph:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1 pid:(int)arg2 options:(unsigned long long)arg3;
- (id)init;

@end

