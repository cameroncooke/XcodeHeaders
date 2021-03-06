//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IDEIndexSymbol, IDEInspectorKeyPath, NSButton, NSTextField;

@interface DBGClassNameInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_textField;
    NSButton *_linkButton;
    IDEIndexSymbol *_symbol;
}

@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property __weak NSButton *linkButton; // @synthesize linkButton=_linkButton;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)linkButtonAction:(id)arg1;
- (id)_tabControllerForWindow;
- (void)_configureForNilString;
- (void)_getSymbol:(id)arg1;
- (double)baseline;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)propertyViewWillUninstallFromContentView;
- (void)propertyViewDidInstallIntoWindow;
- (void)refresh;

@end

