//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSString;

@interface DTBytesFormattedTextFieldCell : NSTextFieldCell
{
    BOOL _formatObjectValue;
    NSString *_defaultsIdentifier;
}

+ (id)cellWithDefaultsIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_toggleFormatting:(id)arg1;
- (void)setFormatsObjectValue:(BOOL)arg1;
- (id)initWithDefaultsIdentifier:(id)arg1;

@end

