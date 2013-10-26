//
//  Logger.h
//  Callbacks
//
//  Created by Arun Agrawal on 26/10/13.
//  Copyright (c) 2013 Arun Agrawal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Logger : NSObject{
    NSMutableData *incomingData;
}
- (void)sayOuch:(NSTimer *)t;
- (void)zoneChange:(NSNotificationCenter *)note;
@end