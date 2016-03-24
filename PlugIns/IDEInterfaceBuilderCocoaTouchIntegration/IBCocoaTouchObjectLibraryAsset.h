//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBObjectLibraryAsset.h"

#import "IBDocumentArchiving.h"

@class NSMutableDictionary, NSString;

@interface IBCocoaTouchObjectLibraryAsset : IBObjectLibraryAsset <IBDocumentArchiving>
{
    NSMutableDictionary *_initialCategoryPathsPerTarget;
}

- (void).cxx_destruct;
- (id)targetRuntime;
- (BOOL)inspectorShouldShowMinimumRequiredRuntimeOSVersion;
- (void)didCreateContent;
- (void)changeTargetRuntimeOfObject:(id)arg1 toTargetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

