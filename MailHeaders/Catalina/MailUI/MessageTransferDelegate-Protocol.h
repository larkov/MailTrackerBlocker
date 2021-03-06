//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageTransfer, NSArray, NSError, NSUndoManager;

@protocol MessageTransferDelegate <NSObject>
- (void)messageTransferDidUndoTransferOfMessages:(NSArray *)arg1;
- (void)messageTransferDidTransferMessages:(NSArray *)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)messageTransferDidTransferMessages:(NSArray *)arg1;
- (void)unhideMessagesForMessageTransfer:(NSArray *)arg1;
- (void)hideMessagesForMessageTransfer:(NSArray *)arg1 selectingNextMessage:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)hideMessagesForMessageTransfer:(NSArray *)arg1 selectingNextMessage:(BOOL)arg2;
- (NSUndoManager *)undoManagerForMessageTransfer:(MessageTransfer *)arg1;
- (void)transfer:(MessageTransfer *)arg1 didCompleteWithError:(NSError *)arg2;
@end

