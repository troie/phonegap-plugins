//
//  PGSocket
// 
//
//  Created by Jesse MacFadyen on 10-05-29.
//  Copyright 2010 Nitobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PhoneGapCommand.h"
#import "AsyncSocket.h"

 
@interface GapSocketCommand : PhoneGapCommand  {

	NSMutableArray *connectedSockets;
}

- (void) connect:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) close:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) send:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
