/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "STSStgObject.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface STStorage : STSStgObject {
@private
	Storage *m_pCStorage;	// 4 = 0x4
}
- (id)init;	// 0x32da0ed5
- (id)initWithCStorage:(Storage *)cstorage;	// 0x32da0f29
- (void)close;	// 0x32da0f65
- (void)dealloc;	// 0x32da0eed
- (int)getChildType:(id)type;	// 0x32da1375
- (id)getChildrenInfo;	// 0x32da1235
- (id)getInfo;	// 0x32da1175
- (id)openStorage:(id)storage withMode:(int)mode;	// 0x32da107d
- (id)openStream:(id)stream withMode:(int)mode;	// 0x32da0f85
- (void)setClass:(SsrwOO_GUID)aClass;	// 0x32da13b1
@end
