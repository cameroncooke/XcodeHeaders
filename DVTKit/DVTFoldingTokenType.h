//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DVTFoldingTokenType : NSObject
{
    unsigned long long _tokenType;
    NSString *_tokenStart;
    NSString *_tokenEnd;
}

+ (id)literalFoldingTokenType;
+ (id)placeholderFoldingTokenType;
@property(copy) NSString *tokenEnd; // @synthesize tokenEnd=_tokenEnd;
@property(copy) NSString *tokenStart; // @synthesize tokenStart=_tokenStart;
@property unsigned long long tokenType; // @synthesize tokenType=_tokenType;
- (void).cxx_destruct;
- (id)stringByStrippingTokens:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 start:(id)arg2 end:(id)arg3;

@end

