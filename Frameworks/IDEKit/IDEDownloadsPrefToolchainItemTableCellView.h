//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSColor;

@interface IDEDownloadsPrefToolchainItemTableCellView : NSTableCellView
{
    BOOL _showContextButton;
    NSColor *_textColor;
}

@property(readonly) NSColor *textColor; // @synthesize textColor=_textColor;
@property BOOL showContextButton; // @synthesize showContextButton=_showContextButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_addTrackingArea;

@end

