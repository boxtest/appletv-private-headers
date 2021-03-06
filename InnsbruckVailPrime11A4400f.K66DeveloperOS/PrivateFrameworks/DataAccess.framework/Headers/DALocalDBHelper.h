/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import </libobjc.A.h>

@class NoteContext;

@interface DALocalDBHelper : NSObject {
	void *_abDB;	// 4 = 0x4
	int _abConnectionCount;	// 8 = 0x8
	CalDatabase *_calDB;	// 12 = 0xc
	int _calConnectionCount;	// 16 = 0x10
	void *_bookmarkDB;	// 20 = 0x14
	int _bookmarkConnectionCount;	// 24 = 0x18
	NoteContext *_noteDB;	// 28 = 0x1c
	int _noteConnectionCount;	// 32 = 0x20
	id _calUnitTestCallbackBlock;	// 36 = 0x24
}
@property(readonly, assign) void *abDB;	// G=0x308256d9; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x30826685; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x30826675; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x30825cd5; converted property
@property(readonly, assign) int noteConnectionCount;	// G=0x30826f11; converted property
@property(readonly, retain) NoteContext *noteDB;	// G=0x30826af5; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x30826f21
+ (id)abTestABDBDir;	// 0x30826fa5
+ (void)calSetTestCalDBDir:(id)dir;	// 0x30826fb5
+ (id)calTestCalDBDir;	// 0x30827039
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x3082560d
- (void)_registerForAddressBookYieldNotifications;	// 0x308256e9
- (void)_registerForCalendarYieldNotifications;	// 0x30825d89
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x30825b95
- (id)abConstraintPlistPath;	// 0x30825cd1
// converted property getter: - (void *)abDB;	// 0x308256d9
- (void)abOpenDB;	// 0x30825845
- (void)abProcessAddedImages;	// 0x30825a41
- (void)abProcessAddedRecords;	// 0x308259d5
- (BOOL)abSaveDB;	// 0x30825aad
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x3082692d
// converted property getter: - (void *)bookmarkDB;	// 0x30826685
- (BOOL)bookmarkOpenDB;	// 0x30826739
- (void)bookmarkSaveDB;	// 0x30826871
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x308264a1
// converted property getter: - (int)calConnectionCount;	// 0x30826675
// converted property getter: - (CalDatabase *)calDB;	// 0x30825cd5
- (void)calOpenDB;	// 0x30825ee5
- (void)calOpenDBWithChangeLogging;	// 0x30826049
- (BOOL)calSaveDB;	// 0x308261a9
- (BOOL)calSaveDBAndFlushCaches;	// 0x30826325
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x30827049
- (BOOL)noteCloseDBAndSave:(BOOL)save;	// 0x30826dd5
// converted property getter: - (int)noteConnectionCount;	// 0x30826f11
// converted property getter: - (id)noteDB;	// 0x30826af5
- (void)noteOpenDB;	// 0x30826ba9
- (BOOL)noteSaveDB;	// 0x30826d11
@end

