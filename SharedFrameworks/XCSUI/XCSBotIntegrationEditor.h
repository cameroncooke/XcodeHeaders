//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSUI/XCSBotSupportingEditor.h>

@class DVTObservingToken;

@interface XCSBotIntegrationEditor : XCSBotSupportingEditor
{
    DVTObservingToken *_botObserver;
    DVTObservingToken *_integrationObserver;
}

- (void).cxx_destruct;
- (void)showLogsTab:(id)arg1;
- (id)integrationInProgressChoices;
- (id)choices;
- (void)selectDocumentLocations:(id)arg1;
- (id)cachedChoiceWithTitle:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

@end

