//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMessageTracer : NSObject
{
}

+ (id)bucketSignatureForValue:(long long)arg1;	// IMP=0x000000000006b372
+ (void)messageTraceDomain:(id)arg1 withCustomKeysAndValues:(id)arg2;	// IMP=0x000000000006b0df
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3;	// IMP=0x000000000006b092
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 signature:(id)arg3 extraStatus:(id)arg4;	// IMP=0x000000000006b019
+ (void)messageTraceResult:(const char *)arg1 domain:(id)arg2 uuid:(id)arg3 signature:(id)arg4 extraStatus:(id)arg5;	// IMP=0x000000000006ae7c
+ (void)messageTraceResult:(const char *)arg1 count:(unsigned long long)arg2 domainPrefix:(id)arg3 domainSuffix:(id)arg4 signature:(id)arg5 extraStatus:(id)arg6;	// IMP=0x000000000006ac72
+ (void)messageTraceDomainPrefix:(id)arg1 domainSuffix:(id)arg2 signature:(id)arg3 signature2:(id)arg4 extraStatus:(id)arg5;	// IMP=0x000000000006aa9d
+ (void)messageTraceOperationError:(id)arg1 domainPrefix:(id)arg2 domainSuffix:(id)arg3 uuid:(id)arg4 duration:(double)arg5 count:(unsigned long long)arg6 size:(unsigned long long)arg7;	// IMP=0x000000000006a719

@end

