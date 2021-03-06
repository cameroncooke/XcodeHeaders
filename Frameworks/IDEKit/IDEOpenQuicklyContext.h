//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, DVTOpenQuicklyPattern, IDEWorkspaceTabController, NSArray, NSString;

@interface IDEOpenQuicklyContext : NSObject
{
    IDEWorkspaceTabController *_workspaceTabController;
    NSString *_rawInput;
    NSString *_line;
    DVTFilePath *_workspaceDir;
    DVTFilePath *_developerDir;
    NSString *_sdkPath;
    DVTOpenQuicklyPattern *_pattern;
    NSArray *_preferredSourceLanguages;
}

@property(readonly) NSArray *preferredSourceLanguages; // @synthesize preferredSourceLanguages=_preferredSourceLanguages;
@property(readonly) NSString *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly) DVTOpenQuicklyPattern *pattern; // @synthesize pattern=_pattern;
@property(readonly) NSString *line; // @synthesize line=_line;
@property(readonly) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(readonly) DVTFilePath *developerDir; // @synthesize developerDir=_developerDir;
@property(readonly) DVTFilePath *workspaceDir; // @synthesize workspaceDir=_workspaceDir;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRawInput:(id)arg1 workspaceTabController:(id)arg2;

@end

