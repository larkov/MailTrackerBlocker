//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailCore/MCAttachmentDataSource-Protocol.h>

@class MCMimePart, NSString;

@interface MCMimePartAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    MCMimePart *_mimePart;	// 8 = 0x8
    unsigned long long _approximateSize;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long approximateSize; // @synthesize approximateSize=_approximateSize;
@property(readonly, nonatomic) MCMimePart *mimePart; // @synthesize mimePart=_mimePart;
// - (void).cxx_destruct;	// IMP=0x000000000007fa70
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (unsigned long long)approximateSizeForAccessLevel:(long long)arg1;	// IMP=0x000000000007f971
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(id)arg2;	// IMP=0x000000000007f771
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(id)arg2;	// IMP=0x000000000007f6e4
- (id)init;	// IMP=0x000000000007f615
- (id)initWithMimePart:(id)arg1;	// IMP=0x000000000007f4f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

