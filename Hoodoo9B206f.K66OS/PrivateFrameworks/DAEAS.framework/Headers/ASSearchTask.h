/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class DASearchQuery;

@interface ASSearchTask : ASTask {
	DASearchQuery *_query;	// 104 = 0x68
	int _numDownloadedElements;	// 108 = 0x6c
}
@property(readonly, assign) DASearchQuery *query;	// G=0x321b12a5; @synthesize=_query
- (id)initWithQuery:(id)query;	// 0x321b1101
- (int)commandCode;	// 0x321b11a1
- (void)dealloc;	// 0x321b1155
- (id)description;	// 0x321b123d
// declared property getter: - (id)query;	// 0x321b12a5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x321b11a5
@end
