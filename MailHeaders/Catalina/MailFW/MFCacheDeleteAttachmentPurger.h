//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject;

@interface MFCacheDeleteAttachmentPurger : NSObject
{
    int _urgency;	// 8 = 0x8
    id <NSCopying><NSObject> _volumeIdentifier;	// 16 = 0x10
    NSString *_errorMessage;	// 24 = 0x18
    unsigned long long _totalBytesPurged;	// 32 = 0x20
}

@property(nonatomic) unsigned long long totalBytesPurged; // @synthesize totalBytesPurged=_totalBytesPurged;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) int urgency; // @synthesize urgency=_urgency;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject> volumeIdentifier; // @synthesize volumeIdentifier=_volumeIdentifier;
// - (void).cxx_destruct;	// IMP=0x000000000002da58
- (BOOL)_deleteAttachmentFile:(id)arg1;	// IMP=0x000000000002d7ab
- (id)_purgeQueue;	// IMP=0x000000000002d715
- (void)_attachmentsForAccounts:(id)arg1 startTimeInterval:(double)arg2 endTimeInterval:(double)arg3 withBlock:(id)arg4;	// IMP=0x000000000002d04f
- (long long)_monthsToKeepRecentAttachments;	// IMP=0x000000000002d023
- (void)_attachmentsForAccounts:(id)arg1 minimumCachePolicy:(long long)arg2 withBlock:(id)arg3;	// IMP=0x000000000002ce3e
- (void)_activeAccountsByCachePolicy:(id *)arg1 inactiveAccountsByCachePolicy:(id *)arg2;	// IMP=0x000000000002c777
- (id)_sharedAccountStore;	// IMP=0x000000000002c71a
- (unsigned long long)purgeWithRequestedBytes:(unsigned long long)arg1 outErrorMessage:(id *)arg2;	// IMP=0x000000000002c31d
@property(readonly, nonatomic) unsigned long long purgeableBytesAvailable;
- (unsigned long long)additionalPurgeableBytesAvailableByChangingCachePolicyTo:(long long)arg1;	// IMP=0x000000000002b65f
- (id)init;	// IMP=0x000000000002b590
- (id)initWithVolumeIdentifier:(id)arg1 urgency:(int)arg2;	// IMP=0x000000000002b510

@end

