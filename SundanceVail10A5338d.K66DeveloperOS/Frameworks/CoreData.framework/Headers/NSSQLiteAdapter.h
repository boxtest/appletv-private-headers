/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLAdapter.h"

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter {
	NSString *_dbpath;	// 12 = 0xc
}
- (id)initWithSQLCore:(id)sqlcore;	// 0x3657a5bd
- (id)createConnection;	// 0x3657a655
- (void)dealloc;	// 0x365996ad
- (id)pathnameForDatabase;	// 0x3657aa1d
- (id)sqliteVersion;	// 0x36632b71
- (Class)statementClass;	// 0x3657cab5
- (BOOL)supportsCorrelatedSubqueries;	// 0x36632b9d
- (id)type;	// 0x3657f4cd
- (id)typeStringForColumn:(id)column;	// 0x36632a9d
- (id)typeStringForSQLType:(unsigned)sqltype;	// 0x36632a19
@end
