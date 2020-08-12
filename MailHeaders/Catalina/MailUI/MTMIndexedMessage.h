//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;	// 16 = 0x10
    BOOL _realPathComputed;	// 24 = 0x18
    NSString *_to;	// 32 = 0x20
    NSMutableDictionary *_computedAdditionalProperties;	// 40 = 0x28
    BOOL _hasCachedChange;	// 48 = 0x30
    BOOL _cachedChange;	// 49 = 0x31
    id _identifier;	// 56 = 0x38
    NSDictionary *_attributes;	// 64 = 0x40
}

@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)identifier;	// IMP=0x0000000100236978
// - (void).cxx_destruct;	// IMP=0x00000001002369de
- (void)updateAdditionalPropertiesFromComputedProperties;	// IMP=0x0000000100236936
- (void)computeAdditionalProperties;	// IMP=0x00000001002366cc
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;	// IMP=0x00000001002365e0
- (id)to;	// IMP=0x00000001002364fb
- (id)savedDate;	// IMP=0x00000001002364a1
- (id)subject;	// IMP=0x0000000100236447
- (id)URL;	// IMP=0x00000001002363e3
- (id)path;	// IMP=0x0000000100236130
- (id)init;	// IMP=0x0000000100236061
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000100235f9a

@end
