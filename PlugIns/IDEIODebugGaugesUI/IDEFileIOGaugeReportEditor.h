//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugGaugeReportEditor.h"

#import "IDEDebugGaugeReportContentDelegate.h"
#import "IDEDebugGaugeReportTopSectionContentDelegate.h"
#import "IDEGaugeCollectedDataListeners.h"
#import "IDEGraphDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class IDEDebugGaugeReportByteStatisticsViewController, IDEDebugGaugeReportEntityListViewController, IDEDebugGaugeReportSearchFieldController, IDEDebugGaugeReportThroughputGaugeViewController, IDEDebugGaugeStatisticsByteRateFormatter, IDEFileIOGaugeDebuggingAddition, IDEODRTableViewDelegate, NSArray, NSButton, NSNumberFormatter, NSString;

@interface IDEFileIOGaugeReportEditor : IDEDebugGaugeReportEditor <NSTableViewDataSource, NSTableViewDelegate, IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate, IDEGraphDelegate, IDEGaugeCollectedDataListeners>
{
    BOOL _resourcesFilterRecentsEnabled;
    IDEFileIOGaugeDebuggingAddition *_debuggingAddition;
    IDEDebugGaugeReportByteStatisticsViewController *_inputStatsViewController;
    IDEDebugGaugeReportByteStatisticsViewController *_outputStatsViewController;
    IDEDebugGaugeReportThroughputGaugeViewController *_graphViewController;
    IDEDebugGaugeStatisticsByteRateFormatter *_graphViewYAxisFormatter;
    NSNumberFormatter *_graphViewXAxisFormatter;
    IDEDebugGaugeReportEntityListViewController *_fileListViewController;
    NSArray *_sortedFileListTableViewEntries;
    IDEDebugGaugeReportEntityListViewController *_resourceTagListViewController;
    NSArray *_resourceTagListViewEntries;
    NSArray *_sortedResourceTagListViewEntries;
    IDEDebugGaugeReportSearchFieldController *_resourceSearchFieldController;
    NSButton *_resourceFilterButton;
    IDEODRTableViewDelegate *_resourceTableViewDelegate;
    NSButton *_profileButton;
}

+ (id)wrColor;
+ (id)rdColor;
@property(retain, nonatomic) NSButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) IDEODRTableViewDelegate *resourceTableViewDelegate; // @synthesize resourceTableViewDelegate=_resourceTableViewDelegate;
@property BOOL resourcesFilterRecentsEnabled; // @synthesize resourcesFilterRecentsEnabled=_resourcesFilterRecentsEnabled;
@property(readonly) NSButton *resourceFilterButton; // @synthesize resourceFilterButton=_resourceFilterButton;
@property(retain, nonatomic) IDEDebugGaugeReportSearchFieldController *resourceSearchFieldController; // @synthesize resourceSearchFieldController=_resourceSearchFieldController;
@property(retain, nonatomic) NSArray *sortedResourceTagListViewEntries; // @synthesize sortedResourceTagListViewEntries=_sortedResourceTagListViewEntries;
@property(retain, nonatomic) NSArray *resourceTagListViewEntries; // @synthesize resourceTagListViewEntries=_resourceTagListViewEntries;
@property(retain, nonatomic) IDEDebugGaugeReportEntityListViewController *resourceTagListViewController; // @synthesize resourceTagListViewController=_resourceTagListViewController;
@property(retain, nonatomic) NSArray *sortedFileListTableViewEntries; // @synthesize sortedFileListTableViewEntries=_sortedFileListTableViewEntries;
@property(retain, nonatomic) IDEDebugGaugeReportEntityListViewController *fileListViewController; // @synthesize fileListViewController=_fileListViewController;
@property(retain, nonatomic) NSNumberFormatter *graphViewXAxisFormatter; // @synthesize graphViewXAxisFormatter=_graphViewXAxisFormatter;
@property(retain, nonatomic) IDEDebugGaugeStatisticsByteRateFormatter *graphViewYAxisFormatter; // @synthesize graphViewYAxisFormatter=_graphViewYAxisFormatter;
@property(retain, nonatomic) IDEDebugGaugeReportThroughputGaugeViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property(retain, nonatomic) IDEDebugGaugeReportByteStatisticsViewController *outputStatsViewController; // @synthesize outputStatsViewController=_outputStatsViewController;
@property(retain, nonatomic) IDEDebugGaugeReportByteStatisticsViewController *inputStatsViewController; // @synthesize inputStatsViewController=_inputStatsViewController;
@property(retain, nonatomic) IDEFileIOGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (void)profileInInstruments:(id)arg1;
- (void)primitiveInvalidate;
- (id)topSectionTitleAccessoryView;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)addSectionsToView:(id)arg1;
- (void)filterRecentResourcesClicked:(id)arg1;
- (id)filterSortedResources:(id)arg1 forRecent:(BOOL)arg2;
- (void)updateResourcesFilteringAndReload:(BOOL)arg1;
- (void)purgeAllForCurrentApplication:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
