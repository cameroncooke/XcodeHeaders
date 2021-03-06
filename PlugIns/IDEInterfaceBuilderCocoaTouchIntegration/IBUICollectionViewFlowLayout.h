//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionViewLayout.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBUICollectionViewFlowLayout : IBUICollectionViewLayout <IBDocumentArchiving, NSCoding>
{
    int scrollDirection;
    struct CGSize itemSize;
    struct CGSize headerReferenceSize;
    struct CGSize footerReferenceSize;
    double minimumLineSpacing;
    double minimumInteritemSpacing;
    CDStruct_c519178c sectionInset;
}

@property(nonatomic) CDStruct_c519178c sectionInset; // @synthesize sectionInset;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection;
- (long long)cellsGrowthDirection;
- (long long)sectionsGrowthDirection;
- (BOOL)supportsSectionHeadersAndFooters;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

