//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESourceEditor/IDEUIRecordingSessionAreaAnnotation.h>

@class NSImage;

@interface IDEUIRecordingHeadAnnotation : IDEUIRecordingSessionAreaAnnotation
{
    NSImage *_icon;
}

+ (id)dvt_uiRecordingHeadPathWithSize:(struct CGSize)arg1 tipWidth:(double)arg2;
+ (id)dvt_uiRecordingHeadPathWithSize:(struct CGSize)arg1;
+ (id)dvt_uiRecordingHeadStopSquareWithSize:(struct CGSize)arg1;
+ (id)_dvt_uiRecordingHeadImageForSize:(struct CGSize)arg1 fillColor:(id)arg2;
- (void).cxx_destruct;
- (id)annotationDisplayName;
- (id)_iconForRect:(struct CGRect)arg1;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (id)initWithDocumentLocation:(id)arg1;

@end

