application test

  entity User {
    name2 :: String
    complex :: WikiText
    unwanted :: Int
    password :: Secret
    
    synchronization configuration{
    	
    	toplevel name property : name2  
        access read: true
        access write: true
        access create: true  
    }
  }

principal is User with credentials name2, password

  define page root(){}