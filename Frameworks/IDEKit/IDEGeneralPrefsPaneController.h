//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSPopUpButton;

@interface IDEGeneralPrefsPaneController : IDEViewController
{
    NSPopUpButton *_issueNavigatorDetailPopUpButton;
    NSPopUpButton *_searchNavigatorDetailPopUpButton;
}

@property(retain) NSPopUpButton *searchNavigatorDetailPopUpButton; // @synthesize searchNavigatorDetailPopUpButton=_searchNavigatorDetailPopUpButton;
@property(retain) NSPopUpButton *issueNavigatorDetailPopUpButton; // @synthesize issueNavigatorDetailPopUpButton=_issueNavigatorDetailPopUpButton;
- (void).cxx_destruct;
- (void)resetDialogWarnings:(id)arg1;
- (id)dialogWarningsExtensionPoint;
- (void)setShouldActivateNewTabsAndWindows:(BOOL)arg1;
- (BOOL)shouldActivateNewTabsAndWindows;
- (void)setIssueNavigatorDetailPopUpLevel:(unsigned long long)arg1;
- (unsigned long long)issueNavigatorDetailPopUpLevel;
- (void)setSearchNavigatorDetailPopUpLevel:(unsigned long long)arg1;
- (unsigned long long)searchNavigatorDetailPopUpLevel;
- (void)loadView;
- (id)_itemWithTitle:(id)arg1 tag:(long long)arg2;
- (id)_menuForNavigatorDetailLevel;

@end
