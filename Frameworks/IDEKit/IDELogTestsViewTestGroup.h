//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDETestReport_TestGroup.h"

@class IDESchemeActionTestSummaryGroup, NSArray, NSMutableArray, NSString;

@interface IDELogTestsViewTestGroup : NSObject <IDETestReport_TestGroup>
{
    NSMutableArray *_failingTestWrappers;
    NSMutableArray *_passingTestWrappers;
    IDESchemeActionTestSummaryGroup *_parentGroup;
    NSArray *_testSummaries;
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSArray *testSummaries; // @synthesize testSummaries=_testSummaries;
@property(retain) IDESchemeActionTestSummaryGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_testTargetName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_groupName;
- (void)addTestWrapper:(id)arg1;
- (id)ide_sharedTests_testGroup_includePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
- (id)ide_sharedTests_passingTests;
- (id)ide_sharedTests_failingTests;
- (id)ide_sharedTests_allTests;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

